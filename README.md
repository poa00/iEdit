アイデアプロセッサ iEdit
====================================================
## 概要
アウトラインプロセッサーとダイアグラムエディタをー合体させると便利なアイデアプロセッサーになるのではないか？？ そう思って作ってみました(アウトラインプロセッサー + ダイアグラムエディター + α)。

iEditでは、ラベルとテキストからなる「ノード」をアイデアを構成する１つの単位とします。ツリーによる階層構造とネットワークビュー上のダイアグラムの組み合わせでアイデアを練り上げていきます。
ノードとノードの関連をリンクと呼びます。リンクはネットワークビューのダイアグラムでは線と矢印で表現されます。また、リンク先はノードに限らず、ディスク上のファイルやWebのURLなども指定できます。
文書の構成を考える、フロー図を書く、日々の仕事を整理するなど用途はさまざまです。

## 動作環境
- Windows 10

## 特徴
- ツリーによる階層管理と、ネットワーク図による関係の視覚化
- ツリーの階層に対応したネットワーク図の切り替え
- ノードの表示属性を個別に設定可能
- ノードの自動レイアウト機能(芋づるモード)
- テキスト/JSON/XML 形式でエクスポート/インポート可能
- HTML 生成
- メタファイルをノードとして指定可能

## 用途
- アイデアの発散と収束
- 文書の構成を練る
- 状態遷移図、フローチャートの作成
- Webのブックマーク集
- プログラムの画面設計

## アーカイブに含まれるファイル
- iEdit.exe : プログラム本体
- iEditDoc.iedx  : サンプルかつドキュメント
- albatross.ies : アルバトロス様ご提供のシェイプファイル
- uiフォルダ配下 : iEditDoc.iedx からリンクしているサブファイルを格納

### シェイプファイルについて
本アーカイブに含まれるシェイプファイル(albatross.ies)は、アルバトロス様よりご提供いただきました。iEdit のメタファイル機能でVisioのステンシルのように使うことができます。最新版はアルバトロス様のホームページよりダウンロードできます。 http://www2u.biglobe.ne.jp/~albatros/iEdit.htm

シェイプファイルの使用方法は、ユーザーズマニュアルを御覧ください。

## インストール
- インストーラは提供していません。適当なディレクトリに解凍してください。
- iEdit.exe のアイコンをダブルクリックして起動すると拡張子 iedx のファイルがシステムに登録されます
- ユーザ固有の領域に書き込むため管理者権限は不要で、他のユーザーには影響を与えません
- iEdit.exe のショートカットをスタートメニューやタスクバーにピン止めすると起動しやすくなります。

## アンインストール
### ファイルタイプの登録解除
- iEdit の拡張子の登録を解除するには、iEdit のメニュー → 「ツール」→ 「ファイルタイプ登録設定」を選択し、ダイアログで「iEditのファイルタイプ(iedx)をシステムに登録しない(登録を解除します)」のラジオボタンを選択し、OKで閉じます。
- あとは iEdit.exe を削除すればアンインストール完了です。

## 使用方法
- iEditDoc.iedxをご覧ください。
- ユーザーガイド https://iedit.kondoumh.com
- iEditのページ https://kondoumh.com/software/iedit/

## iEditの入手先
- kondoumh サイト https://kondoumh.com
- Vector https://www.vector.co.jp/vpack/filearea/win/writing/wp/index.html

## iEdit 関連ツール
- https://kondoumh.com/software/iedit/tools/

## リリースノート
https://iedit.kondoumh.com/releasenotes/

## 著作権・免責事項
iEditは、フリーソフトウェアです。著作権は近藤正裕(kondoumh)にあります。本プログラムを使用して発生したいかなる損害も作者は一切の責任を負いません。また、プログラムの仕様改良に関する義務も負いません。配布、転載等は内容を変更しない限り自由に行ってかまいません。

## コンタクト
本プログラムに対するご意見、ご要望、バグ報告などは、作者のブログ http://blog.kondoumh.com までお願いいたします。リリース告知のエントリーにコメントいただければチェックします。Twitter でつぶやいていただいても時々拾います。
