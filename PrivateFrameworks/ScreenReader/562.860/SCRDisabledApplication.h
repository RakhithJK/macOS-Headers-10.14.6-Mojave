//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRApplication.h>

__attribute__((visibility("hidden")))
@interface SCRDisabledApplication : SCRApplication
{
}

- (BOOL)addObserver:(id)arg1 selector:(SEL)arg2 name:(struct __CFString *)arg3 uiElement:(id)arg4 cancelMask:(unsigned int)arg5;
- (void)setChildren:(id)arg1;
- (void)_updateChildrenWithOutputRequest:(id)arg1 event:(id)arg2;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)isDisabledApplication;

@end

