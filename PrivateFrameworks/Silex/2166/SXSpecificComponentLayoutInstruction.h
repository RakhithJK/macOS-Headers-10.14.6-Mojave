//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutInstruction-Protocol.h>

@class NSString;

@interface SXSpecificComponentLayoutInstruction : NSObject <SXLayoutInstruction>
{
    NSString *_componentIdentifier;
}

+ (id)instructionWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isFulfilledForBlueprint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

