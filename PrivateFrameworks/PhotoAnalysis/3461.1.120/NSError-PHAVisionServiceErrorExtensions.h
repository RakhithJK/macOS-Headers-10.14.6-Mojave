//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (PHAVisionServiceErrorExtensions)
+ (id)phaUnexpectedConditionErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithUserInfo:(id)arg1;
+ (id)phaResourceNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaObjectNotFoundErrorForAssetLocalIdentifier:(id)arg1;
+ (id)phaObjectNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaErrorForInvalidParameterNamed:(id)arg1 localizedDescription:(id)arg2;
+ (id)phaErrorForInvalidParameterValue:(id)arg1 named:(id)arg2;
+ (id)phaErrorForNilParameterNamed:(id)arg1;
+ (id)phaNotImplementedErrorForSelector:(SEL)arg1;
+ (id)phaErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)phaErrorWithCode:(long long)arg1 userInfo:(id)arg2;
@end

