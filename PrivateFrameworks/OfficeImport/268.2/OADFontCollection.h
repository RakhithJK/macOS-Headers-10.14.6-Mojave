//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection
{
    NSMutableDictionary *_scriptToFontMap;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (BOOL)isEqualToFontCollection:(id)arg1;
- (id)scripts;
- (void)setFont:(id)arg1 forScript:(id)arg2;
- (id)fontForScript:(id)arg1;
- (id)init;

@end

