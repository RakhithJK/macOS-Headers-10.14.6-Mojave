//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSSearchExpressionType, NSString;

@interface EWSRestrictionType : NSObject <XSDefinitionProvider>
{
    EWSSearchExpressionType *_SearchExpression;
}

+ (id)definition;
@property(retain, nonatomic) EWSSearchExpressionType *SearchExpression; // @synthesize SearchExpression=_SearchExpression;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
