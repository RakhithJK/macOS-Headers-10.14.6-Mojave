//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MBCLanguageModel : NSObject
{
    struct OpaqueSRSpeechObject *fSystem;
    struct OpaqueSRSpeechObject *fToModel;
    struct OpaqueSRSpeechObject *fPromotionModel;
    struct MBCMoveCollection *fMoves;
}

- (id)recognizedMove:(struct OpaqueSRSpeechObject *)arg1;
- (void)buildLanguageModel:(struct OpaqueSRSpeechObject *)arg1 fromMoves:(struct MBCMoveCollection *)arg2 takeback:(BOOL)arg3;
- (struct OpaqueSRSpeechObject *)pieceDrops;
- (struct OpaqueSRSpeechObject *)pawnDrops;
- (struct OpaqueSRSpeechObject *)castles;
- (struct OpaqueSRSpeechObject *)movesForPiece:(unsigned char)arg1;
- (struct OpaqueSRSpeechObject *)movesFrom:(unsigned char)arg1 to:(unsigned long long)arg2 pawn:(BOOL)arg3;
- (id)initWithRecognitionSystem:(struct OpaqueSRSpeechObject *)arg1;
- (void)addTo:(struct OpaqueSRSpeechObject *)arg1 languageObject:(struct OpaqueSRSpeechObject *)arg2;

@end

