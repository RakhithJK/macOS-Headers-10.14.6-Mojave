//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface QTCaptureVideoPreviewOutputInternal : NSObject
{
    NSMutableArray *connections;
    struct __CFDictionary *callbackData;
    struct __CFDictionary *visualContextsForConnection;
    struct __CFDictionary *renderHelpersForConnection;
    struct __CFDictionary *videoPreviewSynchronizerUnits;
    struct __CFDictionary *videoPreviewOutputUnits;
    NSDictionary *pixelBufferAttributes;
    BOOL deinterlacesVideo;
    BOOL isPreviewRunning;
}

- (void)dealloc;
- (id)init;

@end
