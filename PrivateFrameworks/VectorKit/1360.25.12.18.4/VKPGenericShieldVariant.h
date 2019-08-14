//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPGenericShieldVariant : PBCodable <NSCopying>
{
    CDStruct_e9f6a06b *_layers;
    unsigned long long _layersCount;
    unsigned long long _layersSpace;
    NSString *_fontName;
    float _fontSize;
    float _leftCapWidth;
    float _leftPadding;
    float _lineSpacing;
    unsigned int _numberOfLines;
    float _rightCapWidth;
    float _rightPadding;
    float _textBaseline;
    struct {
        unsigned int fontSize:1;
        unsigned int leftCapWidth:1;
        unsigned int leftPadding:1;
        unsigned int lineSpacing:1;
        unsigned int numberOfLines:1;
        unsigned int rightCapWidth:1;
        unsigned int rightPadding:1;
        unsigned int textBaseline:1;
    } _has;
}

@property(nonatomic) float rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) float leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) float rightCapWidth; // @synthesize rightCapWidth=_rightCapWidth;
@property(nonatomic) float leftCapWidth; // @synthesize leftCapWidth=_leftCapWidth;
@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) float textBaseline; // @synthesize textBaseline=_textBaseline;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRightPadding;
@property(nonatomic) BOOL hasLeftPadding;
@property(nonatomic) BOOL hasLineSpacing;
@property(nonatomic) BOOL hasRightCapWidth;
@property(nonatomic) BOOL hasLeftCapWidth;
@property(nonatomic) BOOL hasFontSize;
@property(readonly, nonatomic) BOOL hasFontName;
@property(nonatomic) BOOL hasTextBaseline;
- (void)setLayers:(CDStruct_e9f6a06b *)arg1 count:(unsigned long long)arg2;
- (CDStruct_e9f6a06b)layerAtIndex:(unsigned long long)arg1;
- (void)addLayer:(CDStruct_e9f6a06b)arg1;
- (void)clearLayers;
@property(readonly, nonatomic) CDStruct_e9f6a06b *layers;
@property(readonly, nonatomic) unsigned long long layersCount;
@property(nonatomic) BOOL hasNumberOfLines;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (void)dealloc;
- (struct CGImage *)newImageWithBackgroundColor:(struct CGColor *)arg1 borderColor:(struct CGColor *)arg2 textureAtlases:(id)arg3 contentScale:(double)arg4;
- (struct CGSize)_imageSizeWithTextureAtlases:(id)arg1;

@end

