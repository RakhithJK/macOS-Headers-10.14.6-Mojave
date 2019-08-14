//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolDOMNode : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *contentSecurityPolicyHash;
@property(copy, nonatomic) NSArray *pseudoElements;
@property(retain, nonatomic) RWIProtocolDOMNode *templateContent;
@property(copy, nonatomic) NSArray *shadowRoots;
@property(retain, nonatomic) RWIProtocolDOMNode *contentDocument;
@property(copy, nonatomic) NSString *frameId;
@property(nonatomic) long long customElementState;
@property(nonatomic) long long shadowRootType;
@property(nonatomic) long long pseudoType;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *xmlVersion;
@property(copy, nonatomic) NSString *systemId;
@property(copy, nonatomic) NSString *publicId;
@property(copy, nonatomic) NSString *baseURL;
@property(copy, nonatomic) NSString *documentURL;
@property(copy, nonatomic) NSArray *attributes;
@property(copy, nonatomic) NSArray *children;
@property(nonatomic) int childNodeCount;
@property(copy, nonatomic) NSString *nodeValue;
@property(copy, nonatomic) NSString *localName;
@property(copy, nonatomic) NSString *nodeName;
@property(nonatomic) int nodeType;
@property(nonatomic) int nodeId;
- (id)initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5;

@end

