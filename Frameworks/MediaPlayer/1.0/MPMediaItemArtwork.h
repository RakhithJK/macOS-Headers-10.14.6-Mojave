//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPMediaItemArtwork : NSObject
{
    struct CGSize _bounds;
    CDUnknownBlockType _requestHandler;
}

- (void).cxx_destruct;
- (id)pngDataFromImage:(id)arg1;
- (id)pngDataWithSize:(struct CGSize)arg1;
- (id)jpegDataWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGRect imageCropRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)initWithBoundsSize:(struct CGSize)arg1 requestHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

