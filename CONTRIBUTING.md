# Contributing

このリポジトリでは、コミット履歴と変更目的を分かりやすく保つため、Conventional Commitsをベースとしたコミットメッセージ規則を使用します。

## Commit Message Convention

基本形式は以下とします。

```text
<type>[optional scope]: <description>
```

必要に応じて、1行空けて本文を追加します。

```text
<type>[optional scope]: <description>

<optional body>
```

`type`と`scope`は英語、`description`と`body`は原則として日本語で記述します。

## Types

| Type | 用途 |
| --- | --- |
| `feat` | 新しい機能、ライブラリ、スニペットなどを追加する |
| `solve` | 競技プログラミングの問題の解答を追加・更新する |
| `fix` | バグや誤った実装を修正する |
| `refactor` | 動作を変えずにコード構造を改善する |
| `perf` | 計算量や実行性能を改善する |
| `docs` | READMEや運用文書などを変更する |
| `style` | 動作に影響しない書式・記述スタイルを変更する |
| `test` | テストを追加・修正する |
| `chore` | VS Code、Git、開発環境などの保守作業を行う |

`solve`は、この競技プログラミングリポジトリ独自のtypeです。

## Scope

`scope`は任意です。

変更対象を明確にできる場合に指定します。

主な例:

```text
snippets
vscode
library
techniques
techful
abc479
docs
```

## Commit Message Rules

コミットメッセージは、原則として以下のルールに従います。

- `type`と`scope`は英語で記述する
- `description`と`body`は原則として日本語で記述する
- `description`は変更内容を簡潔に表す
- `description`は「追加」「修正」「更新」「削除」「整理」などで簡潔に終える
- `description`の末尾に句点を付けない
- 1つのコミットには、できるだけ1つの論理的な変更だけを含める
- 変更理由や補足が必要な場合は、1行空けて本文を書く

## Examples

C++コードスニペットを追加する場合:

```text
feat(snippets): C++コードスニペットを追加
```

AtCoder Beginner Contestの解答を追加する場合:

```text
solve(abc479): A-D問題の解答を追加
```

アルゴリズム実装例を追加する場合:

```text
feat(techniques): Dijkstra法の実装例を追加
```

ライブラリの不具合を修正する場合:

```text
fix(library): Rolling Hashの区間計算を修正
```

実装を整理する場合:

```text
refactor(techniques): Union-Findの実装を整理
```

実行性能を改善する場合:

```text
perf(techniques): 素数列挙の処理を高速化
```

READMEや運用文書を変更する場合:

```text
docs: リポジトリの説明を更新
```

VS Codeの設定を変更する場合:

```text
chore(vscode): ビルド設定を更新
```

書式のみを変更する場合:

```text
style: C++コードの書式を統一
```

## Branch Convention

小規模で独立した競技プログラミングの解答追加や軽微な修正は、`main`へ直接コミットしても構いません。

以下のような変更では、作業ブランチを作成してPull Request経由で`main`へマージすることを推奨します。

- ライブラリやアルゴリズム実装の追加・大幅な変更
- VS CodeやGitなど開発環境設定の変更
- コードスニペットの大幅な変更
- 複数ファイルにまたがる変更
- リポジトリ構成の変更
- 動作確認や試行錯誤を伴う変更

ブランチ名は、以下の形式を基本とします。

```text
<type>/<short-description>
```

例:

```text
docs/commit-convention
feat/snippets
feat/techniques-dijkstra
fix/rolling-hash
refactor/union-find
chore/vscode-settings
```

作業完了後はPull Requestを作成し、`main`との差分を確認してからマージします。

マージ後、不要になった作業ブランチは削除します。

## Reference

コミットメッセージ規則はConventional Commits 1.0.0をベースとしています。

- https://www.conventionalcommits.org/ja/v1.0.0/