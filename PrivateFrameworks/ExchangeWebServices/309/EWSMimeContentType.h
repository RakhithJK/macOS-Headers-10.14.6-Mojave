//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSString;

@interface EWSMimeContentType : NSObject <XSDefinitionProvider>
{
    NSString *_CharacterSet;
    NSString *_stringValue;
}

+ (id)definition;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSString *CharacterSet; // @synthesize CharacterSet=_CharacterSet;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

