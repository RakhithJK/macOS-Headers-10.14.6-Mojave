//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class TSDInteractiveCanvasController, TSDRep, TSWPHyperlinkField;
@protocol TSWPHyperlinkHostRepProtocol;

@interface TSAHyperlinkGestureRecognizer : UIGestureRecognizer
{
    TSDInteractiveCanvasController *_icc;
    TSWPHyperlinkField *_hitField;
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hitRep;
    BOOL _tapEnabled;
    BOOL _tapHoldEnabled;
    BOOL _wasTapHold;
    struct CGPoint _touchBeginPoint;
}

@property(retain, nonatomic) TSWPHyperlinkField *hitField; // @synthesize hitField=_hitField;
@property(retain, nonatomic) TSDRep<TSWPHyperlinkHostRepProtocol> *hitRep; // @synthesize hitRep=_hitRep;
@property(nonatomic) TSDInteractiveCanvasController *icc; // @synthesize icc=_icc;
@property(readonly, nonatomic) BOOL wasTapHold; // @synthesize wasTapHold=_wasTapHold;
@property(nonatomic) BOOL tapHoldEnabled; // @synthesize tapHoldEnabled=_tapHoldEnabled;
@property(nonatomic) BOOL tapEnabled; // @synthesize tapEnabled=_tapEnabled;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)p_delayElapsed:(id)arg1;
- (id)p_smartFieldForTouch:(id)arg1 outRep:(id *)arg2;
- (void)setState:(long long)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

