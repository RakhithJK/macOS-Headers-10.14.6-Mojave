//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTitleBinder.h>

__attribute__((visibility("hidden")))
@interface NSWindowTitleBinder : NSTitleBinder
{
}

+ (id)bindingsForObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;
- (void)window:(id)arg1 didSetTitle:(id)arg2;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (BOOL)isBindingReadOnly:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;

@end

