//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HFErrorHandler : NSObject
{
}

+ (id)_descriptionForHFErrorCode:(long long)arg1;
+ (id)_descriptionForHMErrorCode:(long long)arg1;
+ (id)descriptionLocalizationKeyForError:(id)arg1;
+ (id)sharedHandler;
- (id)_localizedStringOrNilIfNotFoundForKey:(id)arg1;
- (id)_localizedDescriptionForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedTitleForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (BOOL)_isErrorPermanent:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (BOOL)_isErrorIndicativeOfApplicationBug:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (BOOL)canIgnoreError:(id)arg1;
- (void)logError:(id)arg1 operationDescription:(id)arg2;
- (void)handleError:(id)arg1 operationType:(id)arg2 options:(id)arg3 retryBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)handleError:(id)arg1 retryBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)handleError:(id)arg1;

@end

