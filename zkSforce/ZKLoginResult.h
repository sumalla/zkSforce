// Copyright (c) 2009 Simon Fell
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//
// 
// Note: This file was generated by WSDL2ZKSforce. 
//		  see https://github.com/superfell/WSDL2ZKSforce
//       DO NOT HAND EDIT.
//

#import "zkXmlDeserializer.h"

@class ZKUserInfo;
/*
<complexType name="LoginResult" xmlns="http://www.w3.org/2001/XMLSchema" xmlns:ens="urn:sobject.partner.soap.sforce.com" xmlns:tns="urn:partner.soap.sforce.com" xmlns:fns="urn:fault.partner.soap.sforce.com" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/wsdl/soap/" xmlns="http://schemas.xmlsoap.org/wsdl/">
  <sequence>
    <element nillable="true" type="xsd:string" name="metadataServerUrl"/>
    <element type="xsd:boolean" name="passwordExpired"/>
    <element type="xsd:boolean" name="sandbox"/>
    <element nillable="true" type="xsd:string" name="serverUrl"/>
    <element nillable="true" type="xsd:string" name="sessionId"/>
    <element nillable="true" type="tns:ID" name="userId"/>
    <element minOccurs="0" type="tns:GetUserInfoResult" name="userInfo"/>
  </sequence>
</complexType>
*/
@interface ZKLoginResult : ZKXmlDeserializer {
}
@property (readonly) NSString    *metadataServerUrl; 
@property (readonly) BOOL         passwordExpired; 
@property (readonly) BOOL         sandbox; 
@property (readonly) NSString    *serverUrl; 
@property (readonly) NSString    *sessionId; 
@property (readonly) NSString    *userId; 
@property (readonly) ZKUserInfo  *userInfo; 
@end
