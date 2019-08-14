//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAdDocumentStateManager-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSPointerArray, NSString, SXViewport;

@interface SXAdDocumentStateManager : NSObject <SXViewportChangeListener, SXAdDocumentStateManager>
{
    SXViewport *_viewport;
    NSPointerArray *_observers;
}

@property(readonly, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
- (void).cxx_destruct;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (id)initWithViewport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

