//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>
#import <XCTAutomationSupport/XCTElementSetTransformer-Protocol.h>

@class NSString;

@interface XCTElementSetCodableTransformer : NSObject <XCTElementSetTransformer, NSSecureCoding>
{
    BOOL _stopsOnFirstMatch;
    NSString *_transformationDescription;
}

+ (BOOL)supportsSecureCoding;
@property BOOL stopsOnFirstMatch; // @synthesize stopsOnFirstMatch=_stopsOnFirstMatch;
@property(copy) NSString *transformationDescription; // @synthesize transformationDescription=_transformationDescription;
- (void).cxx_destruct;
- (id)requiredKeyPathsOrError:(id *)arg1;
- (id)iteratorForInput:(id)arg1;
- (id)transform:(id)arg1 relatedElements:(id *)arg2;
@property(readonly) BOOL supportsAttributeKeyPathAnalysis;
@property(readonly) BOOL supportsRemoteEvaluation;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

