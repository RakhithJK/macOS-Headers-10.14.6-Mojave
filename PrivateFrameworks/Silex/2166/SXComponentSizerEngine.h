//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentSizerEngine-Protocol.h>

@class NSString, SXComponentTypeMatching;

@interface SXComponentSizerEngine : NSObject <SXComponentSizerEngine>
{
    SXComponentTypeMatching *_factoryMatching;
}

@property(readonly, nonatomic) SXComponentTypeMatching *factoryMatching; // @synthesize factoryMatching=_factoryMatching;
- (void).cxx_destruct;
- (void)removeFactory:(id)arg1;
- (void)addFactory:(id)arg1;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

