//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIAccessibility/UIAccessibilityLoader.h>

@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader
{
}

+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(BOOL)arg3;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5;
+ (BOOL)_accessibilityShouldSortBundlesBeforeLoading;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)arg1;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (id)_axBundleForBundle:(id)arg1;
+ (void)loadExtendedAccessibilityBundles;
+ (void)initialize;

@end

