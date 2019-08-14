//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDInfo-Protocol.h>

@class TSSPropertySet, TSSPropertySetChangeDetails;

@protocol TSDChangeableInfo <TSDInfo>
@property(readonly, nonatomic) BOOL isUserModifiable;
- (TSSPropertySetChangeDetails *)endCollectingChanges;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;

@optional
@property(readonly, nonatomic) Class editorClass;
- (void)willChangeProperties:(TSSPropertySet *)arg1;
@end
