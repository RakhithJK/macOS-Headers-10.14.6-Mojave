//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MGFormatDescription : NSObject
{
    struct opaqueCMFormatDescription *_formatDescription;
}

+ (id)formatDescriptionWithCMFormatDescription:(struct opaqueCMFormatDescription *)arg1;
@property(readonly) struct opaqueCMFormatDescription *formatDescription;
@property(readonly) struct CGSize presentationDimensions;
@property(readonly, copy) NSString *localizedSummary;
- (void)dealloc;
- (id)initWithCMFormatDescription:(struct opaqueCMFormatDescription *)arg1;

@end
