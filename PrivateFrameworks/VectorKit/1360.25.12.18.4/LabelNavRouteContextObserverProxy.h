//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteContextObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LabelNavRouteContextObserverProxy : NSObject <VKRouteContextObserver>
{
    struct RouteContextChangeObserver *_observer;
    struct vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, lhp::Allocator>> _observedContexts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)routeContextStateDidChange:(id)arg1;
- (void)stopObserving:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)dealloc;
- (id)initWithRouteContextChangeObserver:(struct RouteContextChangeObserver *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

