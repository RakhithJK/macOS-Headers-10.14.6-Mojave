//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIColor, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerViewController <NSObject>
- (void)_setSourceIsManaged:(BOOL)arg1;
- (void)_setTintColor:(UIColor *)arg1;
- (void)_documentPickerDidDismiss;
- (void)_prepareForDisplayWithCompletion:(void (^)(struct CGSize))arg1;
- (void)_showDefaultPicker;
- (void)_setAuxiliaryOptions:(NSArray *)arg1;
- (void)_setUploadURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setPickableTypes:(NSArray *)arg1;
@end

