//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SFUtilityAdditions)
- (BOOL)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id *)arg4;
- (BOOL)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id *)arg4 shouldUpdateAttributesHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (unsigned long long)sfu_directoryUsage:(id)arg1;
@end

