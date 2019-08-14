//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying>
{
    NSString *_actionTitle;
    NSString *_actionURLString;
    NSString *_backgroundGradientColor;
    NSData *_discoverMoreVideosInfoData;
    NSString *_name;
    NSString *_nameColor;
    BOOL _displaysAsVideoPlaylist;
    BOOL _useNameColorInWidget;
    BOOL _videoPlaysMutedByDefault;
    struct {
        unsigned int displaysAsVideoPlaylist:1;
        unsigned int useNameColorInWidget:1;
        unsigned int videoPlaysMutedByDefault:1;
    } _has;
}

@property(retain, nonatomic) NSData *discoverMoreVideosInfoData; // @synthesize discoverMoreVideosInfoData=_discoverMoreVideosInfoData;
@property(nonatomic) BOOL useNameColorInWidget; // @synthesize useNameColorInWidget=_useNameColorInWidget;
@property(retain, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) BOOL videoPlaysMutedByDefault; // @synthesize videoPlaysMutedByDefault=_videoPlaysMutedByDefault;
@property(retain, nonatomic) NSString *backgroundGradientColor; // @synthesize backgroundGradientColor=_backgroundGradientColor;
@property(nonatomic) BOOL displaysAsVideoPlaylist; // @synthesize displaysAsVideoPlaylist=_displaysAsVideoPlaylist;
@property(retain, nonatomic) NSString *nameColor; // @synthesize nameColor=_nameColor;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDiscoverMoreVideosInfoData;
@property(nonatomic) BOOL hasUseNameColorInWidget;
@property(readonly, nonatomic) BOOL hasActionURLString;
@property(readonly, nonatomic) BOOL hasActionTitle;
@property(nonatomic) BOOL hasVideoPlaysMutedByDefault;
@property(readonly, nonatomic) BOOL hasBackgroundGradientColor;
@property(nonatomic) BOOL hasDisplaysAsVideoPlaylist;
@property(readonly, nonatomic) BOOL hasNameColor;
@property(readonly, nonatomic) BOOL hasName;

@end

