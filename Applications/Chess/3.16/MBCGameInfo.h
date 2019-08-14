//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBCBoard, MBCDocument, NSMutableDictionary, NSPanel, NSPopUpButton, NSTableView;

@interface MBCGameInfo : NSObject
{
    MBCDocument *fDocument;
    NSPanel *fEditSheet;
    NSPanel *fPrefsSheet;
    NSTableView *fMoveList;
    MBCBoard *fBoard;
    NSPopUpButton *fPrimaryVoiceMenu;
    NSPopUpButton *fAlternateVoiceMenu;
    NSPopUpButton *fBoardStyle;
    NSPopUpButton *fPieceStyle;
    NSMutableDictionary *fStyleLocMap;
    NSMutableDictionary *fEditedProperties;
    int fRows;
    BOOL fHasObservers;
    BOOL whiteEditable;
    BOOL blackEditable;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL blackEditable; // @synthesize blackEditable;
@property(nonatomic) BOOL whiteEditable; // @synthesize whiteEditable;
@property(readonly, nonatomic) NSTableView *moveList; // @synthesize moveList=fMoveList;
@property(nonatomic) MBCDocument *document; // @synthesize document=fDocument;
- (id)gameTitle;
- (id)describeMove:(int)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (void)updateStyles:(id)arg1;
- (void)updateVoices:(id)arg1;
- (void)updateProperties:(id)arg1;
- (void)cancelProperties:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)editPreferencesForWindow:(id)arg1;
- (void)editInfo:(id)arg1;
- (void)editProperties:(id)arg1 modalForWindow:(id)arg2;
- (id)outcome;
- (void)gameEnd:(id)arg1;
- (void)takeback:(id)arg1;
- (void)updateMoves:(id)arg1;
- (void)startGame:(int)arg1 playing:(int)arg2;
- (void)dealloc;
- (void)removeChessObservers;
- (void)setPlayerAlias:(id)arg1 forKey:(id)arg2;
- (void)awakeFromNib;
- (id)unlocalizedStyleName:(id)arg1;
- (id)localizedStyleName:(id)arg1;
- (unsigned long long)indexForVoice:(id)arg1;
- (id)voiceAtIndex:(unsigned long long)arg1;
- (void)loadVoiceMenu:(id)arg1;

@end

