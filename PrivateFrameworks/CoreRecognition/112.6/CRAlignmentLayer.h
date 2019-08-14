//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, CATextLayer, NSMutableArray;

@interface CRAlignmentLayer : CALayer
{
    CATextLayer *_instructionLayer;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_outlineLayer;
    CALayer *_infoLayer;
    NSMutableArray *_cardNumberLayers;
    CATextLayer *_cardholderNameLayer;
    CATextLayer *_expirationDateLayer;
    struct CGPoint _cardNumberHorizontalDefaultPos;
    struct CGRect _cardNumberHorizontalDefaultBounds;
}

+ (id)layer;
@property(retain) CATextLayer *expirationDateLayer; // @synthesize expirationDateLayer=_expirationDateLayer;
@property(retain) CATextLayer *cardholderNameLayer; // @synthesize cardholderNameLayer=_cardholderNameLayer;
@property(nonatomic) struct CGRect cardNumberHorizontalDefaultBounds; // @synthesize cardNumberHorizontalDefaultBounds=_cardNumberHorizontalDefaultBounds;
@property(nonatomic) struct CGPoint cardNumberHorizontalDefaultPos; // @synthesize cardNumberHorizontalDefaultPos=_cardNumberHorizontalDefaultPos;
@property(retain) NSMutableArray *cardNumberLayers; // @synthesize cardNumberLayers=_cardNumberLayers;
@property(retain) CALayer *infoLayer; // @synthesize infoLayer=_infoLayer;
@property(retain) CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
@property(retain) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain) CATextLayer *instructionLayer; // @synthesize instructionLayer=_instructionLayer;
- (void).cxx_destruct;
- (void)animateFoundCardRect:(id)arg1;
- (void)animateFoundCodeParts:(id)arg1 codePartPositions:(id)arg2 codeFrameIndex:(unsigned long long)arg3 cardHolder:(id)arg4 cardholderPosition:(struct CGPoint)arg5 cardholderFrameIndex:(unsigned long long)arg6 expDate:(id)arg7 expdatePosition:(struct CGPoint)arg8 expDateFrameIndex:(unsigned long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)makeTextLayer:(id)arg1 matchWidthOfText:(id)arg2;
- (struct CGPoint)pointOnInfoLayerForPointOnCard:(struct CGPoint)arg1;
- (struct CGRect)alignmentRect;
- (void)fadePlacementImage;
- (void)resetLayer;
- (void)layoutSublayers;
- (id)init;

@end

