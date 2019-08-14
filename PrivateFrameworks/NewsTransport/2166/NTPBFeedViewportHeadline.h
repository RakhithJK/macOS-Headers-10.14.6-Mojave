//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBDate;

@interface NTPBFeedViewportHeadline : PBCodable <NSCopying>
{
    CDStruct_95bda58d _surfacedByTagIDsRefs;
    double _tileProminenceScore;
    NSString *_articleID;
    NSString *_callToActionText;
    NSString *_clusterID;
    NTPBDate *_displayDate;
    int _storyType;
    int _surfacedByBinIDRef;
    int _surfacedByChannelIDRef;
    int _surfacedBySectionIDRef;
    int _surfacedByTopicIDRef;
    int _topStoryType;
    BOOL _usesImageOnTopLayout;
    struct {
        unsigned int tileProminenceScore:1;
        unsigned int storyType:1;
        unsigned int surfacedByBinIDRef:1;
        unsigned int surfacedByChannelIDRef:1;
        unsigned int surfacedBySectionIDRef:1;
        unsigned int surfacedByTopicIDRef:1;
        unsigned int topStoryType:1;
        unsigned int usesImageOnTopLayout:1;
    } _has;
}

@property(retain, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(retain, nonatomic) NTPBDate *displayDate; // @synthesize displayDate=_displayDate;
@property(retain, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property(nonatomic) BOOL usesImageOnTopLayout; // @synthesize usesImageOnTopLayout=_usesImageOnTopLayout;
@property(nonatomic) double tileProminenceScore; // @synthesize tileProminenceScore=_tileProminenceScore;
@property(nonatomic) int surfacedByBinIDRef; // @synthesize surfacedByBinIDRef=_surfacedByBinIDRef;
@property(nonatomic) int surfacedByTopicIDRef; // @synthesize surfacedByTopicIDRef=_surfacedByTopicIDRef;
@property(nonatomic) int surfacedByChannelIDRef; // @synthesize surfacedByChannelIDRef=_surfacedByChannelIDRef;
@property(nonatomic) int surfacedBySectionIDRef; // @synthesize surfacedBySectionIDRef=_surfacedBySectionIDRef;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCallToActionText;
@property(readonly, nonatomic) BOOL hasDisplayDate;
@property(nonatomic) BOOL hasStoryType;
@property(nonatomic) int storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) BOOL hasClusterID;
- (void)setSurfacedByTagIDsRefs:(int *)arg1 count:(unsigned long long)arg2;
- (int)surfacedByTagIDsRefsAtIndex:(unsigned long long)arg1;
- (void)addSurfacedByTagIDsRefs:(int)arg1;
- (void)clearSurfacedByTagIDsRefs;
@property(readonly, nonatomic) int *surfacedByTagIDsRefs;
@property(readonly, nonatomic) unsigned long long surfacedByTagIDsRefsCount;
@property(nonatomic) BOOL hasUsesImageOnTopLayout;
@property(nonatomic) BOOL hasTileProminenceScore;
@property(nonatomic) BOOL hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) BOOL hasSurfacedByBinIDRef;
@property(nonatomic) BOOL hasSurfacedByTopicIDRef;
@property(nonatomic) BOOL hasSurfacedByChannelIDRef;
@property(nonatomic) BOOL hasSurfacedBySectionIDRef;
@property(readonly, nonatomic) BOOL hasArticleID;
- (void)dealloc;

@end

