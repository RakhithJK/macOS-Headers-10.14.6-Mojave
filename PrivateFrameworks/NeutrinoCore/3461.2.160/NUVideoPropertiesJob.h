//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob
{
    id <NUVideoProperties> _videoProperties;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)arg1;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end

