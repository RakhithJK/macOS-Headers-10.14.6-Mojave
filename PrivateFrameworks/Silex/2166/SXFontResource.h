//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXResource.h>

#import <Silex/SXFontResource-Protocol.h>

@class NSString, NSURL;
@protocol SXFontAttributes;

@interface SXFontResource : SXResource <SXFontResource>
{
}

+ (id)typeString;
- (id)fontAttributesWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <SXFontAttributes> fontAttributes; // @dynamic fontAttributes;
@property(readonly, nonatomic) NSString *fontName; // @dynamic fontName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end
