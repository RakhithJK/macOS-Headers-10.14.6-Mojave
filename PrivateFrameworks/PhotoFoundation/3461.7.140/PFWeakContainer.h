//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject
{
    _PFWeakContainerSentenal *_sentenal;
    id _nilNotificationDelegate;
}

- (void)weakReferenceBecameNil;
- (void)setNilNotificationDelegate:(id)arg1;
- (void)stopTrackingWeakObjectDealloc:(id)arg1;
- (void)trackWeakObjectDealloc:(id)arg1;
- (BOOL)isTrackingWeakObjectDealloc:(id)arg1;
- (void)dealloc;
- (id)init;

@end

