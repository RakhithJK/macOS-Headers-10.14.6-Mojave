//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/JSExport-Protocol.h>

@class NSString, NUJSImageTransform;

@protocol NUJSImageTransformExport <JSExport>
- (NUJSImageTransform *)transformByRotate:(double)arg1;
- (NUJSImageTransform *)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (NUJSImageTransform *)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (NSString *)description;

@optional
- (NUJSImageTransform *)transformByRotate:(double)arg1 __JS_EXPORT_AS__rotatedByDegrees:(id)arg2;
- (NUJSImageTransform *)transformByTranslateX:(double)arg1 translateY:(double)arg2 __JS_EXPORT_AS__translatedBy:(id)arg3;
- (NUJSImageTransform *)transformByScaleX:(double)arg1 scaleY:(double)arg2 __JS_EXPORT_AS__scaledBy:(id)arg3;
@end

