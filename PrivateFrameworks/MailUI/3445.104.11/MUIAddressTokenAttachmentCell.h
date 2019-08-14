//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTokenAttachmentCell.h>

@class NSColor;

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell
{
    BOOL _neverShowSeparator;
    BOOL _displayAsExternal;
    NSColor *_foregroundColor;
}

+ (id)colorForExternalDomain;
@property(retain, nonatomic) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) BOOL displayAsExternal; // @synthesize displayAsExternal=_displayAsExternal;
@property BOOL neverShowSeparator; // @synthesize neverShowSeparator=_neverShowSeparator;
- (void).cxx_destruct;
- (id)_textAttributes;
- (BOOL)_finalizeStyleTextOptions:(id)arg1;
- (id)tokenTintColor;

@end

