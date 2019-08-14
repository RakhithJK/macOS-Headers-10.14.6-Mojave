//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXTextStyleFontDescribing-Protocol.h>

@class NSString, UIColor;
@protocol SXTextStyleFontAttributes;

@interface SXDropCapStyle : SXJSONObject <SXTextStyleFontDescribing>
{
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <SXTextStyleFontAttributes> fontAttributes; // @dynamic fontAttributes;
@property(readonly, nonatomic) NSString *fontName; // @dynamic fontName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long numberOfCharacters; // @dynamic numberOfCharacters;
@property(readonly, nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property(readonly, nonatomic) long long numberOfRaisedLines; // @dynamic numberOfRaisedLines;
@property(readonly, nonatomic) long long padding; // @dynamic padding;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIColor *textColor; // @dynamic textColor;

@end

