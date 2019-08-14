//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@interface ImportUtils : NSObject
{
}

+ (BOOL)isMovieImageFormat:(unsigned int)arg1;
+ (id)makeUniquePath:(id)arg1;
+ (unsigned long long)sizeAtPath:(id)arg1;
+ (unsigned int)getImageFormat:(id)arg1;
+ (struct __CFArray *)imageIOCopyTypeExtensions:(struct __CFString *)arg1;
+ (BOOL)imageIOIsSupportedExtension:(struct __CFString *)arg1 usingType:(struct __CFString *)arg2;
+ (struct __CFString *)imageIOExtensionForFormat:(unsigned int)arg1 usingType:(struct __CFString *)arg2;
+ (id)getExtensionForImageFormat:(unsigned int)arg1;
+ (unsigned int)imageIOFormatForExtension:(struct __CFString *)arg1;
+ (unsigned int)getImageFormatForExtension:(id)arg1;
+ (unsigned int)loadableImageFormatAtPath:(id)arg1;
+ (unsigned int)bitsPerComponentForFormat:(unsigned int)arg1;
+ (unsigned int)bitsPerPixelForFormat:(unsigned int)arg1;
+ (BOOL)imageIOIsExtension:(struct __CFString *)arg1 ofType:(struct __CFString *)arg2 forPath:(id)arg3;
+ (BOOL)imageIOIsRawImageFormat:(unsigned int)arg1 path:(id)arg2;

@end

