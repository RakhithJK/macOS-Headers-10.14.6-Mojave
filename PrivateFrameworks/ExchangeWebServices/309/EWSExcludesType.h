//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSearchExpressionType.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSBasePathToElementType, EWSExcludesValueType, NSString;

@interface EWSExcludesType : EWSSearchExpressionType <XSDefinitionProvider>
{
    EWSBasePathToElementType *_Path;
    EWSExcludesValueType *_Bitmask;
}

+ (id)definition;
@property(retain, nonatomic) EWSExcludesValueType *Bitmask; // @synthesize Bitmask=_Bitmask;
@property(retain, nonatomic) EWSBasePathToElementType *Path; // @synthesize Path=_Path;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

