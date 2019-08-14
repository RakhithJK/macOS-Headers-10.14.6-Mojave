//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextInputCore/TIKeyboardActivityObserving-Protocol.h>

@class NSString;

@protocol TITransientLexiconManaging <TIKeyboardActivityObserving>
@property(readonly, nonatomic) const struct _LXLexicon *namedEntityPhraseLexicon;
@property(readonly, nonatomic) const struct _LXLexicon *namedEntityLexicon;
- (void)debugLogEntities;
- (void)getOnce:(void (^)(struct NSDictionary *))arg1;
- (BOOL)searchForWordCaseInsensitive:(NSString *)arg1;
- (BOOL)searchForWord:(NSString *)arg1;
- (void)removeContactObserver:(void (^)(struct NSDictionary *))arg1;
- (void (^)(struct NSDictionary *))addContactObserver:(void (^)(struct NSDictionary *))arg1;
- (void)loadLexicons;
@end

