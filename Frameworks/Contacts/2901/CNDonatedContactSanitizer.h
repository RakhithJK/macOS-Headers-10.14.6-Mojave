//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNDonatedContactSanitizer : NSObject
{
}

+ (id)storeInfoFromPredicate:(id)arg1;
+ (id)storeInfoByMergingStoreInfos:(id)arg1;
+ (void)markContactAndMultiValuesAsDonated:(id)arg1 usingStoreInfo:(id)arg2 andStoreIdentifier:(id)arg3;
+ (id)mutableCopyOfDonatedContact:(id)arg1 withCustomIdentifier:(id)arg2;
+ (id)sanitizeDonatedContact:(id)arg1 matchingPredicate:(id)arg2;

@end

