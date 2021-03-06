/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "TKVibrationRecorderViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSDictionary, TKVibrationRecorderView, TKVibratorController, TLVibrationPattern, UIAlertView, UIBarButtonItem;

@interface TKVibrationRecorderViewController : UIViewController <TKVibrationRecorderViewDelegate, UIAlertViewDelegate, UITextFieldDelegate>
{
    BOOL _waitingForEndOfCurrentVibrationComponent;
    id <TKVibrationRecorderViewControllerDelegate> _delegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_saveButton;
    UIAlertView *_vibrationNameAlertView;
    TKVibratorController *_vibratorController;
    NSDictionary *_indefiniteVibrationPattern;
    int _mode;
    TKVibrationRecorderView *_vibrationRecorderView;
    TLVibrationPattern *_recordedVibrationPattern;
    double _currentVibrationComponentDidStartTimeStamp;
    double _currentVibrationProgressDidStartTimestamp;
}

@property(nonatomic, getter=_isWaitingForEndOfCurrentVibrationComponent, setter=_setWaitingForEndOfCurrentVibrationComponent:) BOOL _waitingForEndOfCurrentVibrationComponent; // @synthesize _waitingForEndOfCurrentVibrationComponent;
@property(nonatomic, setter=_setCurrentVibrationProgressDidStartTimestamp:) double _currentVibrationProgressDidStartTimestamp; // @synthesize _currentVibrationProgressDidStartTimestamp;
@property(nonatomic, setter=_setCurrentVibrationComponentDidStartTimeStamp:) double _currentVibrationComponentDidStartTimeStamp; // @synthesize _currentVibrationComponentDidStartTimeStamp;
@property(retain, nonatomic, setter=_setRecordedVibrationPattern:) TLVibrationPattern *_recordedVibrationPattern; // @synthesize _recordedVibrationPattern;
@property(retain, nonatomic, setter=_setVibrationRecorderView:) TKVibrationRecorderView *_vibrationRecorderView; // @synthesize _vibrationRecorderView;
@property(nonatomic, setter=_setMode:) int _mode; // @synthesize _mode;
@property(retain, nonatomic, setter=_setIndefiniteVibrationPattern:) NSDictionary *_indefiniteVibrationPattern; // @synthesize _indefiniteVibrationPattern;
@property(retain, nonatomic, setter=_setVibratorController:) TKVibratorController *_vibratorController; // @synthesize _vibratorController;
@property(retain, nonatomic, setter=_setVibrationNameAlertView:) UIAlertView *_vibrationNameAlertView; // @synthesize _vibrationNameAlertView;
@property(retain, nonatomic, setter=_setSaveButton:) UIBarButtonItem *_saveButton; // @synthesize _saveButton;
@property(retain, nonatomic, setter=_setCancelButton:) UIBarButtonItem *_cancelButton; // @synthesize _cancelButton;
@property(nonatomic) id <TKVibrationRecorderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityDidEnterRecordingMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1;
- (void)_finishedWithRecorder;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_storeVibrationComponentOfTypePause:(BOOL)arg1;
- (void)_stopVibrating;
- (void)_startVibratingWithVibrationPattern:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;

@end

