//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXResource.h>

#import <Silex/SXImageResource-Protocol.h>

@class NSString, NSURL;

@interface SXImageResource : SXResource <SXImageResource>
{
}

+ (id)typeString;
@property(readonly, copy) NSString *description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFills:(struct CGSize)arg1;
- (double)widthForImageHeight:(double)arg1;
- (double)heightForImageWidth:(double)arg1;
@property(readonly, nonatomic) BOOL wideColorSpace;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) struct CGSize dimensions; // @dynamic dimensions;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *imageIdentifier; // @dynamic imageIdentifier;
@property(readonly) Class superclass;

@end
