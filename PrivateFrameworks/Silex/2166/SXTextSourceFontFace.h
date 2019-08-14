//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFace-Protocol.h>

@class NSString;
@protocol SXFontAttributes;

@interface SXTextSourceFontFace : NSObject <SXFontFace>
{
    NSString *_fontName;
    id <SXFontAttributes> _fontAttributes;
}

+ (id)basicFontAttributesForFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1;
+ (id)fontFaceWithFontName:(id)arg1 andAttributes:(id)arg2;
@property(readonly, nonatomic) id <SXFontAttributes> fontAttributes; // @synthesize fontAttributes=_fontAttributes;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

