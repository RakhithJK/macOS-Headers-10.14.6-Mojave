//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLSaver : NSObject
{
}

+ (BOOL)saveModelToArchive:(struct _MLModelOutputArchiver *)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id *)arg4;
+ (BOOL)saveModelToArchive:(struct _MLModelOutputArchiver *)arg1 model:(id)arg2 error:(id *)arg3;
+ (BOOL)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id *)arg3;

@end

