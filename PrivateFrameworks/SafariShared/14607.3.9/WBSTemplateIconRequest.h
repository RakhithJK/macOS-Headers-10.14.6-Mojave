//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSColor, NSString, WBSTemplateIconMonogramConfiguration;

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest
{
}

@property(readonly, nonatomic) BOOL saveToDisk;
@property(readonly, nonatomic) NSColor *overrideForegroundColor;
@property(readonly, nonatomic) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property(readonly, copy, nonatomic) NSString *monogramTitle;
- (id)initWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3 overrideForegroundColor:(id)arg4 saveToDisk:(BOOL)arg5;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

@end

