//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMTextEditItem.h>

@class NSColor, NSString;

@interface _AMTextEditAttributeRun : _AMTextEditItem
{
}

@property long long size;
@property(copy) NSString *font;
@property(copy) NSColor *color;
- (id)words;
- (id)paragraphs;
- (id)characters;
- (id)attributeRuns;
- (id)attachments;

@end

