//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPLayoutDialog.h"

#import "CPView3DSource-Protocol.h"

@interface CPLayout3DDialog : CPLayoutDialog <CPView3DSource>
{
}

- (void)glDrawView:(id)arg1 opaque:(BOOL)arg2;
- (void)glDrawBackgroundOfView:(id)arg1 withWidth:(double)arg2 height:(double)arg3;
- (void)applySettingsToView:(id)arg1;
- (Class)viewClass;

@end
