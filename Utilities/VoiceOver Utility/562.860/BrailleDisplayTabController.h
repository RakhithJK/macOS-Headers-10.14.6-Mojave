//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSTextField;

@interface BrailleDisplayTabController : NSObject
{
    NSTextField *_displayName;
    NSTextField *_statusValue;
    NSTextField *_connectionValue;
    NSTextField *_cellsValue;
    NSTextField *_statusCellsValue;
    NSButton *_setIsPrimaryDisplay;
}

- (void).cxx_destruct;
- (void)setNumberOfStatusCells:(id)arg1;
- (void)setNumberOfCells:(id)arg1;
- (void)setConnectionDescription:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIsPrimaryDisplayButtonEnabled:(BOOL)arg1;
- (void)setIsPrimaryDisplay:(BOOL)arg1;
- (void)awakeFromNib;

@end

