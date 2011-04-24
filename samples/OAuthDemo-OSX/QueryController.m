//
//  QueryController.m
//  OAuthDemo
//
//  Created by Simon Fell on 4/23/11.
//

#import "QueryController.h"
#import "zkSforceClient.h"
#import "zkQueryResult.h"
#import "zkQueryResult_NSTableView.h"
#import "zkAuthentication.h"

@implementation QueryController

@synthesize results, client;

// This tells KVO (and theirfore the UI binding, that the 'CanQuery' property value is affected by changes to the 'Client' property
+(NSSet *)keyPathsForValuesAffectingCanQuery {
    return [NSSet setWithObject:@"client"];
}

-(BOOL)canQuery {
    return [client loggedIn];
}

-(IBAction)runQuery:(id)sender {
    ZKQueryResult *qr = [client query:@"select id,name from account limit 25"];
    self.results = qr;
    [table setDataSource:qr];
    [table reloadData];
}

-(IBAction)refreshSid:(id)sender {
    // normally you wouldn't need to do this, but its handy to see how it works.
    [[client authenticationInfo] refresh];
}


@end