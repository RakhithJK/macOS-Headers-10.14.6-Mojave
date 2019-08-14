//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBinder.h>

__attribute__((visibility("hidden")))
@interface NSViewStateBinder : NSBinder
{
    struct __viewStateBinderFlags {
        unsigned int _ignoreUpdates:1;
        unsigned int _reservedViewStateBinder:31;
    } _viewStateBinderFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingCategory;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (BOOL)_setValue:(id *)arg1 forBinding:(id)arg2 errorFallbackMessage:(id)arg3;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void *)arg4;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_init;

@end
