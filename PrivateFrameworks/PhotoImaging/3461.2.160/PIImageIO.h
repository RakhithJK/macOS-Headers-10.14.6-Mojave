//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PIImageIO : NSObject
{
}

+ (id)writeImage:(id)arg1 toDirectoryAtPath:(id)arg2 withBasename:(id)arg3;
+ (id)writeImage:(id)arg1 toTemporaryDirectoryWithBasename:(id)arg2;
+ (BOOL)writeCGImage:(struct CGImage *)arg1 fileURL:(id)arg2 fileType:(id)arg3 options:(id)arg4;
+ (BOOL)writeCGImage:(struct CGImage *)arg1 fileURL:(id)arg2 fileType:(id)arg3;
+ (BOOL)writeImage:(id)arg1 fileURL:(id)arg2 fileType:(id)arg3;

@end
