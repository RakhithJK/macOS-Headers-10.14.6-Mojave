//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoRenderJob : NURenderJob
{
}

- (id)result;
- (id)generateVideoComposition:(out id *)arg1;
- (BOOL)prepare:(out id *)arg1;
- (id)videoRenderRequest;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end

