//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDCloudResourceResolver.h>

@class NSDictionary;

@interface RDSlideshowCloudResourceResolver : RDCloudResourceResolver
{
    NSDictionary *_cloudResourcesByIdentifier;
}

- (void).cxx_destruct;
- (void)enumerateCloudResourcesForVersion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)prepareForVersions:(id)arg1;

@end

