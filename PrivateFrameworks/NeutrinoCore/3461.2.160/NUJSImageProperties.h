//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSImagePropertiesExport-Protocol.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;
@protocol NUImageProperties;

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>
{
}

@property(readonly) NUJSRAWImageProperties *rawImageProperties;
@property(readonly) NUJSDepthProperties *depthProperties;
@property(readonly) NSString *fileUTI;
@property(readonly) NSDictionary *metadata;
@property(readonly) id <NUImageProperties> imageProperties;
- (id)initWithImageProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end
