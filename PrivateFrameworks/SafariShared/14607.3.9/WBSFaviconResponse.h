//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

#import <SafariShared/WBSIconResponse-Protocol.h>

@class NSColor, NSImage, NSString;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse>
{
    NSImage *_favicon;
    unsigned long long _faviconType;
}

@property(readonly, nonatomic) unsigned long long faviconType; // @synthesize faviconType=_faviconType;
@property(readonly, nonatomic) NSImage *favicon; // @synthesize favicon=_favicon;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *icon;
- (id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSColor *extractedBackgroundColor;
@property(readonly, nonatomic, getter=isGenerated) BOOL generated;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

